//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKUtility : NSObject
{
}

+ (void)stopGCDTimer:(id)arg1;
+ (id)startGCDTimerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (id)URLEncode:(id)arg1;
+ (id)URLDecode:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)dictionaryWithQueryString:(id)arg1;
- (id)init;

@end

