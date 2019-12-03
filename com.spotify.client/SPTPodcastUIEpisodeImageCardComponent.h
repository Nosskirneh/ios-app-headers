//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class NSSet;

@interface SPTPodcastUIEpisodeImageCardComponent : HUGSThemableComponent <HUBComponent>
{
    long long _cardType;
}

@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)createViewWithFrame:(struct CGRect)arg1;
- (id)initWithCardType:(long long)arg1 theme:(id)arg2;

@end

