//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SUPActionManager;

@interface GHKRecommendationsSection : NSObject
{
    NSArray *_helpUnits;
    SUPActionManager *_actionManager;
}

+ (id)objectionRequires;
@property(retain, nonatomic) SUPActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (void).cxx_destruct;
- (_Bool)displayCustomAction:(id)arg1;
- (_Bool)hasRecommendations;
- (id)shownContentList;
- (id)topLevelTopicHelpUnit;
- (id)helpUnitFromClickRank:(unsigned long long)arg1;
- (_Bool)appendToSectionTable:(id)arg1;
- (void)updateSectionWithHelpUnits:(id)arg1 topLevelTopicURL:(id)arg2;
- (id)init;

@end
