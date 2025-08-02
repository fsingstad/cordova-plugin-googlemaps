//
//  PluginElevationService.h
//  cordova-googlemaps-plugin v2
//
//  Created by Masashi Katsumata.
//
//

#import <Cordova/CDV.h>
#import <GoogleMaps/GoogleMaps.h>
#import "PluginUtil.h"

@interface PluginDirectionsService : CDVPlugin

@property (nonatomic, strong) NSOperationQueue *executeQueue;

@end
