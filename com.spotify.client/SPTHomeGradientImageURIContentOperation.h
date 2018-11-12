//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"

@class NSString;
@protocol EXP_HUBContentOperationDelegate;

@interface SPTHomeGradientImageURIContentOperation : NSObject <EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
    NSString *_customKey;
}

@property(readonly, copy, nonatomic) NSString *customKey; // @synthesize customKey=_customKey;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)find:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithCustomKey:(id)arg1;

@end

