//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMusicCondition, YTIRenderer;

@interface YTIMusicMenuItemConditionalRendererSelector : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicCondition *condition; // @dynamic condition;
@property(nonatomic) _Bool hasCondition; // @dynamic hasCondition;
@property(nonatomic) _Bool hasResultTemplateRenderer; // @dynamic hasResultTemplateRenderer;
@property(retain, nonatomic) YTIRenderer *resultTemplateRenderer; // @dynamic resultTemplateRenderer;

@end

