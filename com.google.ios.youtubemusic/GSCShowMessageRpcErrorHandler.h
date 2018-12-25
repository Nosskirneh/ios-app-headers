//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCRpcErrorHandler-Protocol.h"

@class NSString;

@interface GSCShowMessageRpcErrorHandler : NSObject <GSCRpcErrorHandler>
{
    NSString *_errorMessage;
    NSString *_title;
    _Bool _alert;
}

- (void).cxx_destruct;
- (void)showAlertWithMessage:(id)arg1;
- (void)showToastWithMessage:(id)arg1;
- (id)handleError:(id)arg1 forRequest:(id)arg2;
- (id)initWithErrorMessage:(id)arg1 withTitle:(id)arg2 alert:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 alert:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

