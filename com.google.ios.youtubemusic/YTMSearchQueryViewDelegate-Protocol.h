//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol YTMSearchQueryViewDelegate <NSObject>
- (void)didTapVoiceSearchButton;
- (void)didEditSearchText:(NSString *)arg1;
- (void)didBeginSearchWithText:(NSString *)arg1;
- (void)didPressSearchWithText:(NSString *)arg1;
@end
