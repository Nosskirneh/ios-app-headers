//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

@interface SHKCopy : SHKSharer
{
}

+ (_Bool)canShare;
+ (_Bool)requiresAuthentication;
+ (_Bool)shareRequiresInternetConnection;
+ (_Bool)canShareImage;
+ (_Bool)canShareURL;
+ (_Bool)canShareText;
+ (id)sharerTitle;
+ (id)sharerIcon;
- (_Bool)send;
- (_Bool)shouldAutoShare;
- (void)placeImageOnPasteboard;

@end

