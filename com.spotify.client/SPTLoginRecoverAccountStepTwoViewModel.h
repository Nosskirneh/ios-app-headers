//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTLoginRecoverAccountStepTwoViewLogger, SPTLoginTheme;

@interface SPTLoginRecoverAccountStepTwoViewModel : NSObject
{
    SPTLoginRecoverAccountStepTwoViewLogger *_logger;
    SPTLoginTheme *_theme;
}

@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginRecoverAccountStepTwoViewLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)explanationLabelText;
- (id)titleLabelText;
- (id)emailSentImage;
- (id)viewStyle;
- (id)initWithTheme:(id)arg1 logger:(id)arg2;

@end

