//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GHKIssueResolutionsSection : NSObject
{
    NSArray *_helpUnits;
}

- (void).cxx_destruct;
- (long long)numHelpUnits;
- (id)helpUnitFromClickRank:(unsigned long long)arg1;
- (_Bool)appendToSectionTable:(id)arg1;
- (void)updateSectionWithHelpUnits:(id)arg1;

@end

