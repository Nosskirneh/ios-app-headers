//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SUPActionManager;

@interface GHKSearchSuggestionsSection : NSObject
{
    NSArray *_helpUnits;
    NSString *_query;
    _Bool _noResultsDueToBeingOffline;
    SUPActionManager *_actionManager;
}

+ (id)footerContentViewObject:(_Bool)arg1;
+ (id)objectionRequires;
@property(retain, nonatomic) SUPActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (void).cxx_destruct;
- (_Bool)displayCustomAction:(id)arg1;
- (id)query;
- (id)helpUnitFromClickRank:(unsigned long long)arg1;
- (_Bool)appendToSectionTable:(id)arg1 includeSectionHeader:(_Bool)arg2;
- (void)updateSectionWithHelpUnits:(id)arg1 query:(id)arg2 isOffline:(_Bool)arg3;
- (id)init;

@end

