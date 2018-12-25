//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand, YTITabContentSupportedRenderers, YTITabRendererSelectionStyle;

@interface YTIExpandableTabRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTITabContentSupportedRenderers *content; // @dynamic content;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(copy, nonatomic) NSString *expandedText; // @dynamic expandedText;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasExpandedText; // @dynamic hasExpandedText;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasSelectionStyle; // @dynamic hasSelectionStyle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) YTITabRendererSelectionStyle *selectionStyle; // @dynamic selectionStyle;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

