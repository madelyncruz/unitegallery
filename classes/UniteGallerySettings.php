<?php

class UniteGallerySettings {
  public $type;

  public $options;

  public function getOptions($type) {
    $options = unitegallery_settings_options($type);

    return $this->options = $options;
  }
}