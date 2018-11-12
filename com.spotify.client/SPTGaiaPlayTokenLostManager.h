//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTPlayTokenHandlerObserver-Protocol.h"

@class NSString, SPTPlayTokenHandler;
@protocol SPTAlertController, SPTGaiaDeviceStateManager;

@interface SPTGaiaPlayTokenLostManager : NSObject <SPTPlayTokenHandlerObserver>
{
    SPTPlayTokenHandler *_playTokenHandler;
    id <SPTGaiaDeviceStateManager> _stateManager;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) id <SPTGaiaDeviceStateManager> stateManager; // @synthesize stateManager=_stateManager;
@property(nonatomic) __weak SPTPlayTokenHandler *playTokenHandler; // @synthesize playTokenHandler=_playTokenHandler;
- (void).cxx_destruct;
- (void)playTokenHandler:(id)arg1 tokenLostError:(id)arg2;
- (void)dealloc;
- (id)initWithPlayTokenHandler:(id)arg1 stateManager:(id)arg2 alertController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

