(function($) {
  'use strict';

  Drupal.behaviors.zuniteGallery = {
    attach: function (context, settings) {
      var gallery_type      = settings.unitegallery.unitegallery_type,
          gallery_id        = settings.unitegallery.id,
          gallery_settings  = settings.unitegallery.config;

      if (gallery_type == 'tiles_columns') {
        gallery_type = 'tiles';
      }

      $('#unitegallery_' + gallery_id).unitegallery(gallery_settings);
    }
  };

})(jQuery);