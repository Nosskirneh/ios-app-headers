//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UAActionRunner : NSObject
{
}

+ (void)runActionsWithActionValues:(id)arg1 situation:(long long)arg2 metadata:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)runAction:(id)arg1 value:(id)arg2 situation:(long long)arg3 metadata:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)runAction:(id)arg1 value:(id)arg2 situation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)runAction:(id)arg1 value:(id)arg2 situation:(long long)arg3 metadata:(id)arg4;
+ (void)runAction:(id)arg1 value:(id)arg2 situation:(long long)arg3;
+ (void)runActionWithName:(id)arg1 value:(id)arg2 situation:(long long)arg3 metadata:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)runActionWithName:(id)arg1 value:(id)arg2 situation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)runActionWithName:(id)arg1 value:(id)arg2 situation:(long long)arg3 metadata:(id)arg4;
+ (void)runActionWithName:(id)arg1 value:(id)arg2 situation:(long long)arg3;

@end
