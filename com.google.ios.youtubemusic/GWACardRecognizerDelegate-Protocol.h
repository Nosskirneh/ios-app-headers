//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWACardRecognizer, UIImage;

@protocol GWACardRecognizerDelegate <NSObject>
- (void)cardRecognizer:(GWACardRecognizer *)arg1 foundCardImage:(UIImage *)arg2;
- (void)cardRecognizerFailedToFindCard:(GWACardRecognizer *)arg1;
- (void)cardRecognizerReceivedBlurryImage:(GWACardRecognizer *)arg1;
@end

