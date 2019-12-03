//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTPodcastUtteranceSurveyPageModel : NSObject
{
    _Bool _showStartButton;
    _Bool _showMicrophoneButton;
    _Bool _showDoneButton;
    _Bool _showDismissButton;
    NSString *_loggingIdentifier;
    NSString *_titleText;
    NSString *_descriptionText;
}

@property(nonatomic) _Bool showDismissButton; // @synthesize showDismissButton=_showDismissButton;
@property(nonatomic) _Bool showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) _Bool showMicrophoneButton; // @synthesize showMicrophoneButton=_showMicrophoneButton;
@property(nonatomic) _Bool showStartButton; // @synthesize showStartButton=_showStartButton;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_loggingIdentifier;
- (void).cxx_destruct;
- (id)initWithLoggingIdentifier:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 showStartButton:(_Bool)arg4 showMicrophoneButton:(_Bool)arg5 showDoneButton:(_Bool)arg6 showDismissButton:(_Bool)arg7;

@end
