//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTInnerTubeSectionRenderers-Protocol.h"

@class NSArray, NSString;

@interface YTMMusicDataBoundSectionList : NSObject <YTInnerTubeSectionRenderers>
{
    NSArray *_sectionRenderers;
}

@property(retain, nonatomic) NSArray *sectionRenderers; // @synthesize sectionRenderers=_sectionRenderers;
- (void).cxx_destruct;
- (id)initWithSectionRenderers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

