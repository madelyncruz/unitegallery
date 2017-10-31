<?php

function unitegallery_settings_default() {
  return array(
    'theme_options' => array(
      'title'   => 'Theme options',
      'options' => unitegallery_settings_default_theme_options()
    ),
    'gallery_options' => array(
      'title'   => 'Gallery options',
      'options' => unitegallery_settings_default_gallery_options()
    ),
    'slider_options' => array(
      'title'   => 'Slider options',
      'options' => unitegallery_settings_default_slider_options()
    ),
    'thumb_options' => array(
      'title'   => 'Thumbnail options',
      'options' => unitegallery_settings_default_thumb_options()
    ),
    'stript_thumbs_panel_options' => array(
      'title'   => 'Stript thumbs panel options',
      'options' => unitegallery_settings_default_stript_thumbs_panel_options()
    ),
  );
}

function unitegallery_settings_default_theme_options() {
  return array(
    'theme_enable_fullscreen_button' => array(
      'name'        => 'theme_enable_fullscreen_button',
      'value'       => true,
      'description' => 'show, hide the theme fullscreen button. The position in the theme is constant'
    ),
    'theme_enable_play_button' => array(
      'name'        => 'theme_enable_play_button',
      'value'       => true,
      'description' => 'show, hide the theme play button. The position in the theme is constant'
    ),
    'theme_enable_hidepanel_button' => array(
      'name'        => 'theme_enable_hidepanel_button',
      'value'       => true,
      'description' => 'show, hide the hidepanel button'
    ),
    'theme_enable_text_panel' => array(
      'name'        => 'theme_enable_text_panel',
      'value'       => true,
      'description' => 'enable the panel text panel.'
    ),
    'theme_text_padding_left' => array(
      'name'        => 'theme_text_padding_left',
      'value'       => 20,
      'description' => 'left padding of the text in the textpanel'
    ),
    'theme_text_padding_right' => array(
      'name'        => 'theme_text_padding_right',
      'value'       => 5,
      'description' => 'right padding of the text in the textpanel'
    ),
    'theme_text_align' => array(
      'name'        => 'theme_text_align',
      'value'       => 'left',
      'description' => 'left, center, right - the align of the text in the textpanel'
    ),
    'theme_text_type' => array(
      'name'        => 'theme_text_type',
      'value'       => 'title',
      'description' => 'title, description - text that will be shown on the text panel, title or description'
    ),
    'theme_hide_panel_under_width' => array(
      'name'        => 'theme_hide_panel_under_width',
      'value'       => 480,
      'description' => 'hide panel under certain browser width, if null, don\'t hide'
    ),
  );
}

function unitegallery_settings_default_gallery_options() {
  return array(
    'gallery_width' => array(
      'name'        => 'gallery_width',
      'value'       => 900,
      'description' => 'gallery width'
    ),
    'gallery_height' => array(
      'name'        => 'gallery_height',
      'value'       => 500,
      'description' => 'gallery height'
    ),
    'gallery_min_width' => array(
      'name'        => 'gallery_min_width',
      'value'       => 400,
      'description' => 'gallery minimal width when resizing'
    ),
    'gallery_min_height' => array(
      'name'        => 'gallery_min_height',
      'value'       => 300,
      'description' => 'gallery minimal height when resizing'
    ),
    'gallery_skin' => array(
      'name'        => 'gallery_skin',
      'value'       => 'default',
      'description' => 'default, alexis etc... - the global skin of the gallery. Will change all gallery items by default.'
    ),
    'gallery_images_preload_type' => array(
      'name'        => 'gallery_images_preload_type',
      'value'       => 'minimal',
      'description' => '
        all , minimal , visible - preload type of the images.<br />
        minimal - only image nabours will be loaded each time.<br />
        visible - visible thumbs images will be loaded each time.<br />
        all - load all the images first time.
      '
    ),
    'gallery_autoplay' => array(
      'name'        => 'gallery_autoplay',
      'value'       => false,
      'description' => 'true / false - begin slideshow autoplay on start'
    ),
    'gallery_play_interval' => array(
      'name'        => 'gallery_play_interval',
      'value'       => 3000,
      'description' => 'play interval of the slideshow'
    ),
    'gallery_pause_on_mouseover' => array(
      'name'        => 'gallery_pause_on_mouseover',
      'value'       => true,
      'description' => 'true,false - pause on mouseover when playing slideshow true/false'
    ),
    'gallery_control_thumbs_mousewheel' => array(
      'name'        => 'gallery_control_thumbs_mousewheel',
      'value'       => false,
      'description' => 'true,false - enable / disable the mousewheel'
    ),
    'gallery_control_keyboard' => array(
      'name'        => 'gallery_control_keyboard',
      'value'       => true,
      'description' => 'true,false - enable / disble keyboard controls'
    ),
    'gallery_carousel' => array(
      'name'        => 'gallery_carousel',
      'value'       => true,
      'description' => 'true,false - next button on last image goes to first image.'
    ),
    'gallery_preserve_ratio' => array(
      'name'        => 'gallery_preserve_ratio',
      'value'       => true,
      'description' => 'true, false - preserver ratio when on window resize'
    ),
    'gallery_debug_errors' => array(
      'name'        => 'gallery_debug_errors',
      'value'       => true,
      'description' => 'show error message when there is some error on the gallery area.'
    ),
    'gallery_background_color' => array(
      'name'        => 'gallery_background_color',
      'value'       => '',
      'description' => 'set custom background color. If not set it will be taken from css.'
    ),
  );
}

function unitegallery_settings_default_slider_options() {
  return array(
    'slider_scale_mode' => array(
      'name'        => 'slider_scale_mode',
      'value'       => 'fill',
      'description' => 'fit: scale down and up the image to always fit the slider<br />
                        down: scale down only, smaller images will be shown, don\'t enlarge images (scale up)<br />
                        fill: fill the entire slider space by scaling, cropping and centering the image'
    ),
    'slider_scale_mode_media' => array(
      'name'        => 'slider_scale_mode_media',
      'value'       => 'fill',
      'description' => 'fit, down, full scale mode on media items'
    ),
    'slider_scale_mode_fullscreen' => array(
      'name'        => 'slider_scale_mode_fullscreen',
      'value'       => 'down',
      'description' => 'fit, down, full scale mode on fullscreen.'
    ),
    'slider_item_padding_top' => array(
      'name'        => 'slider_item_padding_top',
      'value'       => 0,
      'description' => 'padding top of the slider item'
    ),
    'slider_item_padding_bottom' => array(
      'name'        => 'slider_item_padding_bottom',
      'value'       => 0,
      'description' => 'padding bottom of the slider item'
    ),
    'slider_item_padding_left' => array(
      'name'        => 'slider_item_padding_left',
      'value'       => 0,
      'description' => 'padding left of the slider item'
    ),
    'slider_item_padding_right' => array(
      'name'        => 'slider_item_padding_right',
      'value'       => 0,
      'description' => 'padding right of the slider item'
    ),
    'slider_transition' => array(
      'name'        => 'slider_transition',
      'value'       => 'slide',
      'description' => 'fade, slide - the transition of the slide change'
    ),
    'slider_transition_speed' => array(
      'name'        => 'slider_transition_speed',
      'value'       => 300,
      'description' => 'transition duration of slide change'
    ),
    'slider_transition_easing' => array(
      'name'        => 'slider_transition_easing',
      'value'       => 'easeInOutQuad',
      'description' => 'transition easing function of slide change'
    ),
    'slider_control_swipe' => array(
      'name'        => 'slider_control_swipe',
      'value'       => true,
      'description' => 'true,false - enable swiping control'
    ),
    'slider_control_zoom' => array(
      'name'        => 'slider_control_zoom',
      'value'       => true,
      'description' => 'true, false - enable zooming control'
    ),
    'slider_zoom_max_ratio' => array(
      'name'        => 'slider_zoom_max_ratio',
      'value'       => 6,
      'description' => 'max zoom ratio'
    ),
    'slider_loader_type' => array(
      'name'        => 'slider_loader_type',
      'value'       => 1,
      'description' => 'shape of the loader (1-7)'
    ),
    'slider_loader_color' => array(
      'name'        => 'slider_loader_color',
      'value'       => 'white',
      'description' => 'color of the loader: (black , white)'
    ),
    'slider_enable_bullets' => array(
      'name'        => 'slider_enable_bullets',
      'value'       => false,
      'description' => 'enable the bullets onslider element'
    ),
    'slider_bullets_skin' => array(
      'name'        => 'slider_bullets_skin',
      'value'       => '',
      'description' => 'skin of the bullets, if empty inherit from gallery skin'
    ),
    'slider_bullets_space_between' => array(
      'name'        => 'slider_bullets_space_between',
      'value'       => -1,
      'description' => 'set the space between bullets. If -1 then will be set default space from the skins'
    ),
    'slider_bullets_align_hor' => array(
      'name'        => 'slider_bullets_align_hor',
      'value'       => 'center',
      'description' => 'left, center, right - bullets horizontal align'
    ),
    'slider_bullets_align_vert' => array(
      'name'        => 'slider_bullets_align_vert',
      'value'       => 'bottom',
      'description' => 'top, middle, bottom - bullets vertical algin'
    ),
    'slider_bullets_offset_hor' => array(
      'name'        => 'slider_bullets_offset_hor',
      'value'       => 0,
      'description' => 'bullets horizontal offset'
    ),
    'slider_bullets_offset_vert' => array(
      'name'        => 'slider_bullets_offset_vert',
      'value'       => 10,
      'description' => 'bullets vertical offset'
    ),
    'slider_enable_arrows' => array(
      'name'        => 'slider_enable_arrows',
      'value'       => true,
      'description' => 'enable arrows onslider element'
    ),
    'slider_arrows_skin' => array(
      'name'        => 'slider_arrows_skin',
      'value'       => '',
      'description' => 'skin of the slider arrows, if empty inherit from gallery skin'
    ),
    'slider_arrow_left_align_hor' => array(
      'name'        => 'slider_arrow_left_align_hor',
      'value'       => 'left',
      'description' => 'left, center, right - left arrow horizonal align'
    ),
    'slider_arrow_left_align_vert' => array(
      'name'        => 'slider_arrow_left_align_vert',
      'value'       => 'middle',
      'description' => 'top, middle, bottom - left arrow vertical align'
    ),
    'slider_arrow_left_offset_hor' => array(
      'name'        => 'slider_arrow_left_offset_hor',
      'value'       => 20,
      'description' => 'left arrow horizontal offset'
    ),
    'slider_arrow_left_offset_vert' => array(
      'name'        => 'slider_arrow_left_offset_vert',
      'value'       => 0,
      'description' => 'left arrow vertical offset'
    ),
    'slider_arrow_right_align_hor' => array(
      'name'        => 'slider_arrow_right_align_hor',
      'value'       => 'right',
      'description' => 'left, center, right - right arrow horizontal algin'
    ),
    'slider_arrow_right_align_vert' => array(
      'name'        => 'slider_arrow_right_align_vert',
      'value'       => 'middle',
      'description' => 'top, middle, bottom - right arrow vertical align'
    ),
    'slider_arrow_right_offset_hor' => array(
      'name'        => 'slider_arrow_right_offset_hor',
      'value'       => 20,
      'description' => 'right arrow horizontal offset'
    ),
    'slider_arrow_right_offset_vert' => array(
      'name'        => 'slider_arrow_right_offset_vert',
      'value'       => 0,
      'description' => 'right arrow vertical offset'
    ),
    'slider_enable_progress_indicator' => array(
      'name'        => 'slider_enable_progress_indicator',
      'value'       => true,
      'description' => 'enable progress indicator element'
    ),
    'slider_progress_indicator_type' => array(
      'name'        => 'slider_progress_indicator_type',
      'value'       => 'pie',
      'description' => 'pie, pie2, bar (if pie not supported, it will switch to bar automatically)'
    ),
    'slider_progress_indicator_align_hor' => array(
      'name'        => 'slider_progress_indicator_align_hor',
      'value'       => 'left',
      'description' => 'left, center, right - progress indicator horizontal align'
    ),
    'slider_progress_indicator_align_vert' => array(
      'name'        => 'slider_progress_indicator_align_vert',
      'value'       => 'top',
      'description' => 'top, middle, bottom - progress indicator vertical align'
    ),
    'slider_progress_indicator_offset_hor' => array(
      'name'        => 'slider_progress_indicator_offset_hor',
      'value'       => 16,
      'description' => 'progress indicator horizontal offset'
    ),
    'slider_progress_indicator_offset_vert' => array(
      'name'        => 'slider_progress_indicator_offset_vert',
      'value'       => 36,
      'description' => 'progress indicator vertical offset'
    ),
    'slider_progressbar_color' => array(
      'name'        => 'slider_progressbar_color',
      'value'       => '#FFFFFF',
      'description' => 'progress bar color'
    ),
    'slider_progressbar_opacity' => array(
      'name'        => 'slider_progressbar_opacity',
      'value'       => 0.6,
      'description' => 'progress bar opacity'
    ),
    'slider_progressbar_line_width' => array(
      'name'        => 'slider_progressbar_line_width',
      'value'       => 5,
      'description' => 'progress bar line width'
    ),
    'slider_progresspie_type_fill' => array(
      'name'        => 'slider_progresspie_type_fill',
      'value'       => false,
      'description' => 'false is stroke, true is fill - the progress pie type, stroke of fill'
    ),
    'slider_progresspie_color1' => array(
      'name'        => 'slider_progresspie_color1',
      'value'       => '#B5B5B5',
      'description' => 'the first color of the progress pie'
    ),
    'slider_progresspie_color2' => array(
      'name'        => 'slider_progresspie_color2',
      'value'       => '#E5E5E5',
      'description' => 'progress pie second color'
    ),
    'slider_progresspie_stroke_width' => array(
      'name'        => 'slider_progresspie_stroke_width',
      'value'       => 6,
      'description' => 'progress pie stroke width'
    ),
    'slider_progresspie_width' => array(
      'name'        => 'slider_progresspie_width',
      'value'       => 30,
      'description' => 'progess pie width'
    ),
    'slider_progresspie_height' => array(
      'name'        => 'slider_progresspie_height',
      'value'       => 30,
      'description' => 'progress pie height'
    ),
    'slider_enable_play_button' => array(
      'name'        => 'slider_enable_play_button',
      'value'       => true,
      'description' => 'true,false - enable play / pause button onslider element'
    ),
    'slider_play_button_skin' => array(
      'name'        => 'slider_play_button_skin',
      'value'       => '',
      'description' => 'skin of the slider play button, if empty inherit from gallery skin'
    ),
    'slider_play_button_align_hor' => array(
      'name'        => 'slider_play_button_align_hor',
      'value'       => 'left',
      'description' => 'left, center, right - play button horizontal align'
    ),
    'slider_play_button_align_vert' => array(
      'name'        => 'slider_enable_play_button',
      'value'       => 'top',
      'description' => 'top, middle, bottom - play button vertical align'
    ),
    'slider_play_button_offset_hor' => array(
      'name'        => 'slider_play_button_offset_hor',
      'value'       => 40,
      'description' => 'play button horizontal offset'
    ),
    'slider_play_button_offset_vert' => array(
      'name'        => 'slider_play_button_offset_vert',
      'value'       => 8,
      'description' => 'play button vertical offset'
    ),
    'slider_enable_fullscreen_button' => array(
      'name'        => 'slider_enable_fullscreen_button',
      'value'       => true,
      'description' => 'true,false - enable fullscreen button onslider element'
    ),
    'slider_fullscreen_button_skin' => array(
      'name'        => 'slider_fullscreen_button_skin',
      'value'       => '',
      'description' => 'skin of the slider fullscreen button, if empty inherit from gallery skin'
    ),
    'slider_fullscreen_button_align_hor' => array(
      'name'        => 'slider_fullscreen_button_align_hor',
      'value'       => 'left',
      'description' => 'left, center, right - fullscreen button horizonatal align'
    ),
    'slider_fullscreen_button_align_vert' => array(
      'name'        => 'slider_fullscreen_button_align_vert',
      'value'       => 'top',
      'description' => 'top, middle, bottom - fullscreen button vertical align'
    ),
    'slider_fullscreen_button_offset_hor' => array(
      'name'        => 'slider_fullscreen_button_offset_hor',
      'value'       => 11,
      'description' => 'fullscreen button horizontal offset'
    ),
    'slider_fullscreen_button_offset_vert' => array(
      'name'        => 'slider_fullscreen_button_offset_vert',
      'value'       => 9,
      'description' => 'fullscreen button vertical offset'
    ),
    'slider_enable_zoom_panel' => array(
      'name'        => 'slider_enable_zoom_panel',
      'value'       => true,
      'description' => 'true,false - enable the zoom buttons, works together with zoom control.'
    ),
    'slider_zoompanel_skin' => array(
      'name'        => 'slider_zoompanel_skin',
      'value'       => '',
      'description' => 'skin of the slider zoom panel, if empty inherit from gallery skin'
    ),
    'slider_zoompanel_align_hor' => array(
      'name'        => 'slider_zoompanel_align_hor',
      'value'       => 'right',
      'description' => 'left, center, right - zoom panel horizontal align'
    ),
    'slider_zoompanel_align_vert' => array(
      'name'        => 'slider_zoompanel_align_vert',
      'value'       => 'top',
      'description' => 'top, middle, bottom - zoom panel vertical align'
    ),
    'slider_zoompanel_offset_hor' => array(
      'name'        => 'slider_zoompanel_offset_hor',
      'value'       => 12,
      'description' => 'zoom panel horizontal offset'
    ),
    'slider_zoompanel_offset_vert' => array(
      'name'        => 'slider_zoompanel_offset_vert',
      'value'       => 10,
      'description' => 'zoom panel vertical offset'
    ),
    'slider_controls_always_on' => array(
      'name'        => 'slider_controls_always_on',
      'value'       => true,
      'description' => 'true,false - controls are always on, false - show only on mouseover'
    ),
    'slider_controls_appear_ontap' => array(
      'name'        => 'slider_controls_appear_ontap',
      'value'       => true,
      'description' => 'true,false - appear controls on tap event on touch devices'
    ),
    'slider_controls_appear_duration' => array(
      'name'        => 'slider_controls_appear_duration',
      'value'       => 300,
      'description' => 'the duration of appearing controls'
    ),
    'slider_videoplay_button_type' => array(
      'name'        => 'slider_videoplay_button_type',
      'value'       => 'square',
      'description' => 'square, round - the videoplay button type, square or round'
    ),
    'slider_enable_text_panel' => array(
      'name'        => 'slider_enable_text_panel',
      'value'       => false,
      'description' => 'true,false - enable the text panel'
    ),
    'slider_textpanel_always_on' => array(
      'name'        => 'slider_textpanel_always_on',
      'value'       => true,
      'description' => 'true,false - text panel are always on, false - show only on mouseover'
    ),
    'slider_textpanel_text_valign' => array(
      'name'        => 'slider_textpanel_text_valign',
      'value'       => 'middle',
      'description' => 'middle, top, bottom - text vertical align'
    ),
    'slider_textpanel_padding_top' => array(
      'name'        => 'slider_textpanel_padding_top',
      'value'       => 10,
      'description' => 'textpanel padding top'
    ),
    'slider_textpanel_padding_bottom' => array(
      'name'        => 'slider_textpanel_padding_bottom',
      'value'       => 10,
      'description' => 'textpanel padding bottom'
    ),
    'slider_textpanel_height' => array(
      'name'        => 'slider_textpanel_height',
      'value'       => null,
      'description' => 'textpanel height. if null it will be set dynamically'
    ),
    'slider_textpanel_padding_title_description' => array(
      'name'        => 'slider_textpanel_padding_title_description',
      'value'       => 5,
      'description' => 'the space between the title and the description'
    ),
    'slider_textpanel_padding_right' => array(
      'name'        => 'slider_textpanel_padding_right',
      'value'       => 11,
      'description' => 'cut some space for text from right'
    ),
    'slider_textpanel_padding_left' => array(
      'name'        => 'slider_textpanel_padding_left',
      'value'       => 11,
      'description' => 'cut some space for text from left'
    ),
    'slider_textpanel_fade_duration' => array(
      'name'        => 'slider_textpanel_fade_duration',
      'value'       => 200,
      'description' => 'the fade duration of textpanel appear'
    ),
    'slider_textpanel_enable_title' => array(
      'name'        => 'slider_textpanel_enable_title',
      'value'       => true,
      'description' => 'enable the title text'
    ),
    'slider_textpanel_enable_description' => array(
      'name'        => 'slider_textpanel_enable_description',
      'value'       => true,
      'description' => 'enable the description text'
    ),
    'slider_textpanel_enable_bg' => array(
      'name'        => 'slider_textpanel_enable_bg',
      'value'       => true,
      'description' => 'enable the textpanel background'
    ),
    'slider_textpanel_bg_color' => array(
      'name'        => 'slider_textpanel_bg_color',
      'value'       => '#000000',
      'description' => 'textpanel background color'
    ),
    'slider_textpanel_bg_opacity' => array(
      'name'        => 'slider_textpanel_bg_opacity',
      'value'       => 0.4,
      'description' => 'textpanel background opacity'
    ),
    'slider_textpanel_title_color' => array(
      'name'        => 'slider_textpanel_title_color',
      'value'       => null,
      'description' => 'textpanel title color. if null - take from css'
    ),
    'slider_textpanel_title_font_family' => array(
      'name'        => 'slider_textpanel_title_font_family',
      'value'       => null,
      'description' => 'textpanel title font family. if null - take from css'
    ),
    'slider_textpanel_title_text_align' => array(
      'name'        => 'slider_textpanel_title_text_align',
      'value'       => null,
      'description' => 'textpanel title text align. if null - take from css'
    ),
    'slider_textpanel_title_font_size' => array(
      'name'        => 'slider_textpanel_title_font_size',
      'value'       => null,
      'description' => 'textpanel title font size. if null - take from css'
    ),
    'slider_textpanel_title_bold' => array(
      'name'        => 'slider_textpanel_title_bold',
      'value'       => null,
      'description' => 'textpanel title bold. if null - take from css'
    ),
    'slider_textpanel_css_title' => array(
      'name'        => 'slider_textpanel_css_title',
      'value'       => '{}',
      'description' => 'textpanel additional css of the title'
    ),
    'slider_textpanel_desc_color' => array(
      'name'        => 'slider_textpanel_desc_color',
      'value'       => null,
      'description' => 'textpanel description font family. if null - take from css'
    ),
    'slider_textpanel_desc_font_family' => array(
      'name'        => 'slider_textpanel_desc_font_family',
      'value'       => null,
      'description' => 'textpanel description font family. if null - take from css'
    ),
    'slider_textpanel_desc_text_align' => array(
      'name'        => 'slider_textpanel_desc_text_align',
      'value'       => null,
      'description' => 'slider_textpanel_desc_text_align'
    ),
    'slider_textpanel_desc_font_size' => array(
      'name'        => 'slider_textpanel_desc_font_size',
      'value'       => null,
      'description' => 'textpanel description font size. if null - take from css'
    ),
    'slider_textpanel_desc_bold' => array(
      'name'        => 'slider_textpanel_desc_bold',
      'value'       => null,
      'description' => 'textpanel description bold. if null - take from css'
    ),
    'slider_textpanel_css_description' => array(
      'name'        => 'slider_textpanel_css_description',
      'value'       => '{}',
      'description' => 'textpanel additional css of the description'
    ),
    'slider_textpanel_bg_css' => array(
      'name'        => 'slider_textpanel_bg_css',
      'value'       => '{}',
      'description' => 'textpanel background css'
    )
  );
}

function unitegallery_settings_default_thumb_options() {
  return array(
    'thumb_width' => array(
      'name'        => 'thumb_width',
      'value'       => 88,
      'description' => 'thumb width'
    ),
    'thumb_height' => array(
      'name'        => 'thumb_height',
      'value'       => 50,
      'description' => 'thumb height'
    ),
    'thumb_fixed_size' => array(
      'name'        => 'thumb_fixed_size',
      'value'       => true,
      'description' => 'true,false - fixed/dynamic thumbnail width'
    ),
    'thumb_border_effect' => array(
      'name'        => 'thumb_border_effect',
      'value'       => true,
      'description' => 'true, false - specify if the thumb has border'
    ),
    'thumb_border_width' => array(
      'name'        => 'thumb_border_width',
      'value'       => 0,
      'description' => 'thumb border width'
    ),
    'thumb_border_color' => array(
      'name'        => 'thumb_border_color',
      'value'       => '#000000',
      'description' => 'thumb border color'
    ),
    'thumb_over_border_width' => array(
      'name'        => 'thumb_over_border_width',
      'value'       => 0,
      'description' => 'thumb border width in mouseover state'
    ),
    'thumb_over_border_color' => array(
      'name'        => 'thumb_over_border_color',
      'value'       => '#d9d9d9',
      'description' => 'thumb border color in mouseover state'
    ),
    'thumb_selected_border_width' => array(
      'name'        => 'thumb_selected_border_width',
      'value'       => 1,
      'description' => 'thumb width in selected state'
    ),
    'thumb_selected_border_color' => array(
      'name'        => 'thumb_selected_border_color',
      'value'       => '#d9d9d9',
      'description' => 'thumb border color in selected state'
    ),
    'thumb_round_corners_radius' => array(
      'name'        => 'thumb_round_corners_radius',
      'value'       => 0,
      'description' => 'thumb border radius'
    ),
    'thumb_color_overlay_effect' => array(
      'name'        => 'thumb_color_overlay_effect',
      'value'       => true,
      'description' => 'true,false - thumb color overlay effect, release the overlay on mouseover and selected states'
    ),
    'thumb_overlay_color' => array(
      'name'        => 'thumb_overlay_color',
      'value'       => '#000000',
      'description' => 'thumb overlay color'
    ),
    'thumb_overlay_opacity' => array(
      'name'        => 'thumb_overlay_opacity',
      'value'       => 0.4,
      'description' => 'thumb overlay color opacity'
    ),
    'thumb_overlay_reverse' => array(
      'name'        => 'thumb_overlay_reverse',
      'value'       => false,
      'description' => 'true,false - images overlay effect on normal state only'
    ),
    'thumb_image_overlay_type' => array(
      'name'        => 'thumb_image_overlay_type',
      'value'       => 'bw',
      'description' => 'bw , blur, sepia - the type of image effect overlay, black and white, sepia and blur.'
    ),
    'thumb_transition_duration' => array(
      'name'        => 'thumb_transition_duration',
      'value'       => 200,
      'description' => 'thumb effect transition duration'
    ),
    'thumb_transition_easing' => array(
      'name'        => 'thumb_transition_easing',
      'value'       => 'easeOutQuad',
      'description' => 'thumb effect transition easing'
    ),
    'thumb_show_loader' => array(
      'name'        => 'thumb_show_loader',
      'value'       => true,
      'description' => 'show thumb loader while loading the thumb'
    ),
    'thumb_loader_type' => array(
      'name'        => 'thumb_loader_type',
      'value'       => 'dark',
      'description' => 'dark, light - thumb loader type'
    ),
  );
}

function unitegallery_settings_default_stript_thumbs_panel_options() {
  return array(
    'strippanel_padding_top' => array(
      'name'        => 'strippanel_padding_top',
      'value'       => 8,
      'description' => 'space from top of the panel'
    ),
    'strippanel_padding_bottom' => array(
      'name'        => 'strippanel_padding_bottom',
      'value'       => 0,
      'description' => 'space from bottom of the panel'
    ),
    'strippanel_padding_left' => array(
      'name'        => 'strippanel_padding_left',
      'value'       => 0,
      'description' => 'space from left of the panel'
    ),
    'strippanel_padding_right' => array(
      'name'        => 'strippanel_padding_right',
      'value'       => 0,
      'description' => 'space from right of the panel'
    ),
    'strippanel_enable_buttons' => array(
      'name'        => 'strippanel_enable_buttons',
      'value'       => false,
      'description' => 'enable buttons from the sides of the panel'
    ),
    'strippanel_buttons_skin' => array(
      'name'        => 'strippanel_buttons_skin',
      'value'       => '',
      'description' => 'skin of the buttons, if empty inherit from gallery skin'
    ),
    'strippanel_padding_buttons' => array(
      'name'        => 'strippanel_padding_buttons',
      'value'       => 2,
      'description' => 'padding between the buttons and the panel'
    ),
    'strippanel_buttons_role' => array(
      'name'        => 'strippanel_buttons_role',
      'value'       => 'scroll_strip',
      'description' => 'scroll_strip, advance_item - the role of the side buttons'
    ),
    'strippanel_enable_handle' => array(
      'name'        => 'strippanel_enable_handle',
      'value'       => true,
      'description' => 'enable grid handle'
    ),
    'strippanel_handle_align' => array(
      'name'        => 'strippanel_handle_align',
      'value'       => 'top',
      'description' => 'top, middle, bottom , left, right, center - close handle tip align on the handle bar according'
    ),
    'strippanel_handle_offset' => array(
      'name'        => 'strippanel_handle_offset',
      'value'       => 0,
      'description' => 'offset of handle bar according the valign'
    ),
    'strippanel_handle_skin' => array(
      'name'        => 'strippanel_handle_skin',
      'value'       => '',
      'description' => 'skin of the handle, if empty inherit from gallery skin'
    ),
    'strippanel_background_color' => array(
      'name'        => 'strippanel_background_color',
      'value'       => '',
      'description' => 'background color of the strip wrapper, if not set, it will be taken from the css'
    ),
    'strip_thumbs_align' => array(
      'name'        => 'strip_thumbs_align',
      'value'       => 'left',
      'description' => 'left, center, right, top, middle, bottom - the align of the thumbs when they smaller then the strip size.'
    ),
    'strip_space_between_thumbs' => array(
      'name'        => 'strip_space_between_thumbs',
      'value'       => 6,
      'description' => 'space between thumbs'
    ),
    'strip_thumb_touch_sensetivity' => array(
      'name'        => 'strip_thumb_touch_sensetivity',
      'value'       => 15,
      'description' => 'from 1-100, 1 - most sensetive, 100 - most unsensetive'
    ),
    'strip_scroll_to_thumb_duration' => array(
      'name'        => 'strip_scroll_to_thumb_duration',
      'value'       => 500,
      'description' => 'duration of scrolling to thumb'
    ),
    'strip_scroll_to_thumb_easing' => array(
      'name'        => 'strip_scroll_to_thumb_easing',
      'value'       => 'easeOutCubic',
      'description' => 'easing of scrolling to thumb animation'
    ),
    'strip_control_avia' => array(
      'name'        => 'strip_control_avia',
      'value'       => true,
      'description' => 'avia control - move the strip according strip moseover position'
    ),
    'strip_control_touch' => array(
      'name'        => 'strip_control_touch',
      'value'       => true,
      'description' => 'touch control - move the strip by dragging it'
    ),
  );
}
