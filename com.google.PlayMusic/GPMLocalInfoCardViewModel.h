//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMCardViewModel.h"

@class GPMLocalInfoCardLoggingInfo, NSArray, NSString;

@interface GPMLocalInfoCardViewModel : GPMCardViewModel
{
    NSString *_cardKey;
    NSString *_titleKey;
    NSString *_contentKey;
    GPMLocalInfoCardLoggingInfo *_loggingInfo;
    NSArray *_actionItems;
}

@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(readonly, nonatomic) GPMLocalInfoCardLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(copy, nonatomic) NSString *contentKey; // @synthesize contentKey=_contentKey;
@property(copy, nonatomic) NSString *titleKey; // @synthesize titleKey=_titleKey;
@property(copy, nonatomic) NSString *cardKey; // @synthesize cardKey=_cardKey;
- (void).cxx_destruct;
- (id)initWithInfoItem:(id)arg1;

@end

