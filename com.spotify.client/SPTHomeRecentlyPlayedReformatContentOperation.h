//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"

@class NSString;
@protocol EXP_HUBContentOperationDelegate;

@interface SPTHomeRecentlyPlayedReformatContentOperation : NSObject <EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
    NSString *_modelIdentifier;
}

@property(readonly, copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moveRecentlyPlayedComponentToIndex:(unsigned long long)arg1 inViewModelBuilder:(id)arg2;
- (void)updateRecentlyPlayedWithTitle:(id)arg1 inViewModelBuilder:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithRecentlyPlayedComponentModelIdentifier:(id)arg1;

@end

