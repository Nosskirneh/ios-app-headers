//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JavaScriptCore/JSContext.h>

@interface MobFoxJSContext : JSContext
{
}

+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (id)makeRequest:(id)arg1 withParams:(id)arg2 andWithMethod:(id)arg3;
- (id)evaluateScriptFromURL:(id)arg1;
- (id)init;

@end
