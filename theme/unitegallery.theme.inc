<?php


/**
 * @file
 * Colorbox theme functions.
 */

/**
 * Returns HTML for an Colorbox image field formatter.
 *
 * @param array $variables
 *   An associative array containing:
 *   - item: An array of image data.
 *   - image_style: An optional image style.
 *   - path: An array containing the link 'path' and link 'options'.
 *
 * @return string
 *   An HTML string representing the themed output.
 *
 * @ingroup themeable
 */
function theme_unitegallery_image_formatter($variables) {

  $item = $variables['item'];
  $entity_type = $variables['entity_type'];
  $entity = $variables['entity'];
  $field = $variables['field'];
  $settings = $variables['display_settings'];

  $image = array(
    'path' => $item['uri'],
    'alt' => isset($item['alt']) ? $item['alt'] : '',
    'title' => isset($item['title']) ? $item['title'] : '',
    'style_name' => $settings['unitegallery_style'],
  );

  if ($style_name = $settings['unitegallery_style']) {
    $path = image_style_url($style_name, $image['path']);
  }
  else {
    $path = file_create_url($image['path']);
  }

  return theme('unitegallery_imagefield', array('image' => $image, 'path' => $path, 'title' => NULL, 'gid' => NULL));
}

/**
 * Returns HTML for an image using a specific Colorbox image style.
 *
 * @param array $variables
 *   An associative array containing:
 *   - image: image item as array.
 *   - path: The path of the image that should be displayed in the Colorbox.
 *   - title: The title text that will be used as a caption in the Colorbox.
 *   - gid: Gallery id for Colorbox image grouping.
 *
 * @return string
 *   An HTML string containing a link to the given path.
 *
 * @ingroup themeable
 */
function theme_unitegallery_imagefield($variables) {
  $class = array('unitegallery');

  if (!empty($variables['image']['style_name'])) {
    $image = theme('image_style', $variables['image']);
  }
  else {
    $image = theme('image', $variables['image']);
  }

  $options = drupal_parse_url($variables['path']);
  $options += array(
    'html' => TRUE,
    'attributes' => array(
      'title' => $variables['title'],
      'class' => $class,
      'data-unitegallery' => $variables['gid'],
      'data-unitegallery-img-attrs' => '{"title": "' . $variables['image']['title'] . '", "alt": "' . $variables['image']['alt'] . '"}',
    ),
  );

  return $image;
}