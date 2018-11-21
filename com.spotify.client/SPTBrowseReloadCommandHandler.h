//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol SPTBrowseViewModelProvider;

@interface SPTBrowseReloadCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTBrowseViewModelProvider> _viewModelProvider;
}

@property(readonly, nonatomic) id <SPTBrowseViewModelProvider> viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithViewModelProvider:(id)arg1;

@end

