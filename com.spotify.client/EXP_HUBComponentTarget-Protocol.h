//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EXP_HUBSerializable-Protocol.h"

@class NSArray, NSDictionary, NSURL;
@protocol EXP_HUBViewModel;

@protocol EXP_HUBComponentTarget <EXP_HUBSerializable>
@property(readonly, copy, nonatomic) NSDictionary *customData;
@property(readonly, nonatomic) NSArray *actionIdentifiers;
@property(readonly, nonatomic) id <EXP_HUBViewModel> initialViewModel;
@property(readonly, copy, nonatomic) NSURL *URI;
@end

