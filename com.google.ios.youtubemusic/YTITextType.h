//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTElementNodeType-Protocol.h"

@class NSString, YTIAttributedString, YTITextExpansionOptions;

@interface YTITextType : GPBMessage <YTElementNodeType>
{
}

+ (id)descriptor;
- (id)attributedStringWithContext:(id)arg1;
- (Class)nodeClass;
- (id)buildWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(retain, nonatomic) YTIAttributedString *additionalTruncationText; // @dynamic additionalTruncationText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTITextExpansionOptions *expansionOptions; // @dynamic expansionOptions;
@property(nonatomic) _Bool hasAdditionalTruncationText; // @dynamic hasAdditionalTruncationText;
@property(nonatomic) _Bool hasExpansionOptions; // @dynamic hasExpansionOptions;
@property(nonatomic) _Bool hasMaxLines; // @dynamic hasMaxLines;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTruncationText; // @dynamic hasTruncationText;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int maxLines; // @dynamic maxLines;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIAttributedString *text; // @dynamic text;
@property(retain, nonatomic) YTIAttributedString *truncationText; // @dynamic truncationText;

@end

