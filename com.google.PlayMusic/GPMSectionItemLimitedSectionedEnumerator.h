//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMSectionedEnumerator.h"

@class NSDictionary;

@interface GPMSectionItemLimitedSectionedEnumerator : GPMSectionedEnumerator
{
    GPMSectionedEnumerator *_wrappedEnumerator;
    NSDictionary *_sectionItemLimits;
    unsigned long long _currentSection;
    unsigned long long _countInCurrentSection;
}

- (void).cxx_destruct;
- (id)nextObjectWithSection:(unsigned long long *)arg1;
- (id)sectionIndexes;
- (id)initWithSectionedEnumerator:(id)arg1 sectionItemLimits:(id)arg2;
- (id)init;

@end
