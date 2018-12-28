//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class GHKChatMessageData;
@protocol GHKChatMessageContentViewDelegate;

@interface GHKChatMessageContentViewObject : GOOBaseContentViewObject
{
    _Bool _firstInGroup;
    _Bool _lastInGroup;
    _Bool _enableSurveyButton;
    GHKChatMessageData *_data;
    id <GHKChatMessageContentViewDelegate> _delegate;
}

@property(nonatomic) _Bool enableSurveyButton; // @synthesize enableSurveyButton=_enableSurveyButton;
@property(nonatomic) _Bool lastInGroup; // @synthesize lastInGroup=_lastInGroup;
@property(nonatomic) _Bool firstInGroup; // @synthesize firstInGroup=_firstInGroup;
@property(nonatomic) __weak id <GHKChatMessageContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GHKChatMessageData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (Class)contentViewClass;
- (id)initWithMessageData:(id)arg1;

@end

