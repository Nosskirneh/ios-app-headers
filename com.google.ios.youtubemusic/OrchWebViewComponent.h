//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, OrchRedirectForm;

@interface OrchWebViewComponent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRedirectForm; // @dynamic hasRedirectForm;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) OrchRedirectForm *redirectForm; // @dynamic redirectForm;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

