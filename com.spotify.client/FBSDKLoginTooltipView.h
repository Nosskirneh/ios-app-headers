//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDKTooltipView.h"

@interface FBSDKLoginTooltipView : FBSDKTooltipView
{
    _Bool _forceDisplay;
    id <FBSDKLoginTooltipViewDelegate> _delegate;
}

@property(nonatomic) _Bool forceDisplay; // @synthesize forceDisplay=_forceDisplay;
@property(nonatomic) __weak id <FBSDKLoginTooltipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentInView:(id)arg1 withArrowPosition:(struct CGPoint)arg2 direction:(unsigned long long)arg3;
- (id)init;

@end

