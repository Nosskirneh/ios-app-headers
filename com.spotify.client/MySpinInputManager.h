//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MSAFocusControlDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol MySpinFocusControlDelegate;

@interface MySpinInputManager : NSObject <MSAFocusControlDelegate>
{
    NSMutableArray *preferredFocusControlDelegates;
    id <MySpinFocusControlDelegate> _focusControlDelegate;
    unsigned long long _keyInputCapabilitiesInternal;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long keyInputCapabilitiesInternal; // @synthesize keyInputCapabilitiesInternal=_keyInputCapabilitiesInternal;
@property __weak id <MySpinFocusControlDelegate> focusControlDelegate; // @synthesize focusControlDelegate=_focusControlDelegate;
- (void).cxx_destruct;
- (void)unregisterPreferredFocusControlDelegate:(id)arg1;
- (void)registerPreferredFocusControlDelegate:(id)arg1;
- (unsigned long long)keyInputCapabilities;
- (void)receiveMySpinKeyEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

