//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDLLogTarget-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SDLLogTargetOSLog : NSObject <SDLLogTarget>
{
    NSMutableDictionary *_clients;
}

+ (id)logger;
@property(retain, nonatomic) NSMutableDictionary *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (unsigned char)oslogLevelForSDLLogLevel:(long long)arg1;
- (void)teardownLogger;
- (void)logWithLog:(id)arg1 formattedLog:(id)arg2;
- (_Bool)setupLogger;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

