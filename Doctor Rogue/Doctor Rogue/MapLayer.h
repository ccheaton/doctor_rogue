//
//  MapLayer.h
//  Doctor Rogue
//
//  Created by Clay Heaton on 5/10/13.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@class HKTMXTiledMap;
@class CCPanZoomController;
@class GameWorld;
@class GridLayer;
@class GameObject;
@class MapEntryExitManager;

@interface MapLayer : CCLayer {
    
}

@property (retain, nonatomic) GameWorld *gameWorld;

@property (retain, nonatomic) HKTMXTiledMap *currentMap;
@property (assign, readwrite) CGPoint screenCenter;
@property (assign, readwrite) CGPoint mapDimensions;

@property (assign, readwrite) CGPoint previousTileDoubleTapped;
@property (assign, readwrite) CGPoint tileDoubleTapped;
@property (assign, readwrite) BOOL    highlightDoubleTappedTile;

@property (retain, readwrite) GridLayer *gridLayer; // should be retained by the map

@property (retain, readwrite) CCPanZoomController *panZoomController;
@property (assign, readwrite) BOOL showGrid;
@property (assign, readwrite) BOOL tapIsTargetingMapLayer;

// Tutorial for gesture recognizers: http://www.raywenderlich.com/4817/how-to-integrate-cocos2d-and-uikit
@property (retain) UITapGestureRecognizer * doubleTapRecognizer;


@property (retain, readwrite) GameObject *objectToTrack;
@property (assign, readwrite) BOOL      trackObject;

@property (retain, readwrite) MapEntryExitManager *entryExitManager;

- (id) initWithMap:(HKTMXTiledMap *)map andGameWorld:(GameWorld *)gw;

- (BOOL) underlayerIsNeeded;

- (CGPoint)positionOnTerrain:(CGPoint)tileCoordinate;
- (void) centerPanZoomControllerOnCoordinate:(CGPoint)mapCoord duration:(float)duration rate:(float)rate;

@end
