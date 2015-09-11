/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet('drupal',
      [
        { name : 'ToC - Header'       , element : 'h2', attributes: {'class':'toc-header'} },
        { name : 'ToC - Subheader'	  , element : 'h3', attributes: {'class':'toc-subheader'} },
        { name : 'Toggler Label'      , element : 'p', attributes: {'class':'toggler-header'} },
        { name : 'Toggler Body'       , element : 'div', attributes: {'class':'toggler-body'} },
        { name : 'Highlighted Frame'  , element : 'div', attributes: {'class':'highlighted-frame'} },
        { name : 'Highlighted Link'   , element : 'a',   attributes: {'class':'highlighted-link'} },
        { name : 'Typewriter'		  , element : 'tt' },
        { name : 'Computer Code'	  , element : 'code' },
        { name : 'Cited Work'		  , element : 'cite' },
        { name : 'Inline Quotation'	  , element : 'q' },

        /* Object Styles */

        {
          name : 'Image on Left',
          element : 'img',
          attributes : {
            'class' : 'image-left',
            'align' : 'left'
          }
        },
        {
          name : 'Image on Right',
          element : 'img',
          attributes : {
            'class' : 'image-right',
            'align' : 'right'
          }
        },
        {
          name : 'Image on Center',
          element : 'img',
          attributes : {
            'class' : 'image-center',
            'align' : 'center'
          }
        }
      ]
    );
}