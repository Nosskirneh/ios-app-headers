//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DZRLoghashLogger : NSObject
{
}

+ (void)logTag:(struct NSString *)arg1 withMessage:(id)arg2 andArguments:(char *)arg3;
+ (void)logTag:(struct NSString *)arg1 withMessage:(id)arg2;
+ (void)logMessage:(id)arg1 withArguments:(char *)arg2;
+ (void)removeLoghashDispatcherForName:(id)arg1;
+ (void)setLoghashDispatcher:(id)arg1 forName:(id)arg2;
+ (id)mergeDefaultConfiguration:(id)arg1 withCustomConfiguration:(id)arg2;
+ (id)filePathForCustomConfiguration;
+ (void)load;

@end

