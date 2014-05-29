<?php
/**
 * @file
 * sfova_basic_pages.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function sfova_basic_pages_default_rules_configuration() {
  $items = array();
  $items['rules_thank_you'] = entity_import('rules_config', '{ "rules_thank_you" : {
      "LABEL" : "Thank you",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "simplenews_rules" ],
      "ON" : { "simplenews_rules_event_subscribe" : [  ] },
      "DO" : [
        { "redirect" : { "url" : "104\\u002Fthank-you" } },
        { "simplenews_rules_action_subscribe" : {
            "mail" : "[node:field-reg-email-address]",
            "tid" : "1",
            "confirmation" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
