//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeSectionRenderer-Protocol.h"

@class NSMutableArray, NSString;

@interface YTISearchSuggestionsSectionRenderer : GPBMessage <YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasHideQueryCompletionInSearchBox; // @dynamic hasHideQueryCompletionInSearchBox;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideQueryCompletionInSearchBox; // @dynamic hideQueryCompletionInSearchBox;
@property(readonly) Class superclass;

@end

