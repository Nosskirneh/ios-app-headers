//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTStorylinesLoadEventLogger;

@interface SPTStorylinesEntityLoadEventLogger : NSObject
{
    SPTStorylinesLoadEventLogger *_loadEventLogger;
}

@property(retain, nonatomic) SPTStorylinesLoadEventLogger *loadEventLogger; // @synthesize loadEventLogger=_loadEventLogger;
- (void).cxx_destruct;
- (void)logEntityLoadEventForEntityUri:(id)arg1 withIdentifier:(id)arg2 forEventType:(long long)arg3 fromSource:(long long)arg4 withDetails:(id)arg5;
- (void)logStorylinesLoadErrorEventForEntityUri:(id)arg1 fromSource:(long long)arg2 withDetails:(id)arg3;
- (void)logStorylinesLoadSuccessEventForStorylines:(id)arg1 fromSource:(long long)arg2;
- (void)logStorylinesLoadingEventForEntityUri:(id)arg1;
- (id)initWithLoadEventLogger:(id)arg1;

@end
