//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGAlertView.h"

@class ANGSignupView;

@interface ANGSignUpAlertView : ANGAlertView
{
    ANGSignupView *_signupView;
}

+ (void)show;
@property(retain, nonatomic) ANGSignupView *signupView; // @synthesize signupView=_signupView;
- (void).cxx_destruct;
- (void)alertButtonClicked:(id)arg1;

@end

