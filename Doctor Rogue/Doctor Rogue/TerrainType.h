//
//  TerrainType.h
//  Doctor Rogue
//
//  Created by Clay Heaton on 5/30/13.
//

#import <Foundation/Foundation.h>
#import "Constants.h"

@class Tile;

@interface TerrainType : NSObject


@property (assign, readwrite) unsigned int terrainNumber;
@property (copy, readwrite)   NSString *name;
@property (retain, readwrite) NSMutableArray *wholeBrushes;
@property (retain, readwrite) NSMutableArray *threeQuarterBrushes;
@property (retain, readwrite) NSMutableArray *halfBrushes;
@property (retain, readwrite) NSMutableArray *quarterBrushes;

@property (retain, readwrite) NSMutableSet *connections;

@property (retain, readwrite) NSMutableDictionary *transitions;

- (Tile *) wholeBrush;
- (NSMutableSet *) allBrushes;

- (void) findTransitionsTo:(NSArray *)terrainTypes;
- (void) establishConnections:(NSArray *)terrainTypes;

- (unsigned short) costOfTransitionTo:(unsigned short)terrainNumber;

@end
