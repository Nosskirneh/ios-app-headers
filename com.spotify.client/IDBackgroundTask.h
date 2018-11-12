//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IDBackgroundTask : NSObject
{
    NSString *_name;
    unsigned long long _backgroundTaskIdentifier;
    CDUnknownBlockType _expirationHandler;
}

+ (id)new;
@property(copy) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1;
- (void)end;
- (_Bool)begin;
- (id)init;
- (id)initWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1;

@end

