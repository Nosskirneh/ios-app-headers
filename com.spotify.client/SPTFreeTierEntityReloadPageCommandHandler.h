//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@class SPTFreeTierEntitySignalSource;

@interface SPTFreeTierEntityReloadPageCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    SPTFreeTierEntitySignalSource *_reloadPageSignalSource;
}

@property(readonly, nonatomic) SPTFreeTierEntitySignalSource *reloadPageSignalSource; // @synthesize reloadPageSignalSource=_reloadPageSignalSource;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithReloadPageSignalSource:(id)arg1;

@end

