//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@interface YTToggleInfoCardsResponderEvent : YTResponderEvent
{
    _Bool _infoCardsHidden;
    long long _controllerType;
    long long _cardType;
}

+ (id)eventWithFirstResponder:(id)arg1 infoCardsHidden:(_Bool)arg2 controllerType:(long long)arg3 cardType:(long long)arg4;
+ (id)eventWithFirstResponder:(id)arg1 infoCardsHidden:(_Bool)arg2 cardType:(long long)arg3;
+ (id)eventWithFirstResponder:(id)arg1 infoCardsHidden:(_Bool)arg2 controllerType:(long long)arg3;
+ (id)eventWithFirstResponder:(id)arg1 infoCardsHidden:(_Bool)arg2;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) long long controllerType; // @synthesize controllerType=_controllerType;
@property(readonly, nonatomic) _Bool infoCardsHidden; // @synthesize infoCardsHidden=_infoCardsHidden;
- (id)initWithFirstResponder:(id)arg1 infoCardsHidden:(_Bool)arg2 controllerType:(long long)arg3 cardType:(long long)arg4;

@end

