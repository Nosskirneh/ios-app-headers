//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHRecentContainerPlayEventMO.h"

@class NSString;

@interface RHRecentContainerPlayEventMO : _RHRecentContainerPlayEventMO
{
}

+ (id)updateWithPayload:(id)arg1 dataController:(id)arg2 forContextTypes:(id)arg3 andUpdateBlock:(CDUnknownBlockType)arg4;
+ (id)processPayload:(id)arg1 dataController:(id)arg2 forContextTypes:(id)arg3;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) id playContext;

@end

