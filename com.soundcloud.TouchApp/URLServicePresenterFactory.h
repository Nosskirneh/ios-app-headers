//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TtP10SoundCloud24Collection2Experimenting_;

@interface URLServicePresenterFactory : NSObject
{
    id <_TtP10SoundCloud24Collection2Experimenting_> _collection2Experiment;
}

@property(readonly, nonatomic) id <_TtP10SoundCloud24Collection2Experimenting_> collection2Experiment; // @synthesize collection2Experiment=_collection2Experiment;
- (void).cxx_destruct;
- (id)streamingSettingsPresenter;
- (id)discoveryPresenter;
- (id)activatePresenter;
- (id)startScreenPresenter;
- (id)openNotificationSettingsPresenter;
- (id)notificationPreferencesPresenter;
- (id)notificationPromptPresenter;
- (id)searchPresenter;
- (id)authenticationPresenter;
- (id)collectionPresenter;
- (id)defaultPresenters;
- (id)determinedPathPresenters;
- (id)presenters;
- (id)presenterForURL:(id)arg1;
- (id)initWithCollection2Experiment:(id)arg1;
- (id)init;

@end
