//
//  Tournament.h
//  Fifa_competitions
//
//  Created by Andy Chikalo on 11/18/16.
//  Copyright © 2016 ios.dev. All rights reserved.
//

#import <Realm/Realm.h>
#import "Player.h"
#import "Group.h"
#import "KnockoutStage.h"

@interface Tournament : RLMObject


@property KnockoutStageType currentStage;
@property BOOL isInitialized;
@property NSString * id;
@property RLMArray<Player *><Player> * players;
@property BOOL hasGroupStage;
@property RLMArray<Group*><Group> * groups;
@property BOOL isGroupStageCompleted;
@property RLMArray<KnockoutStage*><KnockoutStage> * knockoutStages;
@property BOOL isCompleted;

- (NSError *) generateGroups;
- (NSError *) genereteInitialKnockoutStage;
- (NSError *) nextStage;


// test comment
@end
