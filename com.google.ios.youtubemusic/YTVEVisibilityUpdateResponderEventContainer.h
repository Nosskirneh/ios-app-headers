//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTIInteractionLoggingClientData, YTILoggingDirectives, YTIVisualElement;

@interface YTVEVisibilityUpdateResponderEventContainer : NSObject
{
    YTIVisualElement *_visualElement;
    int _eventType;
    NSString *_CSN;
    YTIInteractionLoggingClientData *_clientData;
    Class _rendererClass;
    YTILoggingDirectives *_loggingDirectives;
}

- (void).cxx_destruct;
- (id)createNewEventWithFirstResponder:(id)arg1;
- (id)initWithResponderEvent:(id)arg1;

@end

