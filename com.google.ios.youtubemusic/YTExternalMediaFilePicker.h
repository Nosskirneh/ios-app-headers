//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTExternalMediaFilePicker : NSObject
{
}

+ (id)pickBestMediaFileFrom:(id)arg1 scaleFactor:(double)arg2 screenHeight:(double)arg3 screenWidth:(double)arg4;
+ (_Bool)isStreamingMIMETypeAllowed:(id)arg1;
+ (_Bool)isProgressiveMIMETypeAllowed:(id)arg1;
+ (_Bool)isMediaFilePlayable:(id)arg1;
+ (id)getPlayableMediaFilesFrom:(id)arg1;
+ (id)bestFileFrom:(id)arg1 scaleFactor:(double)arg2 screenHeight:(double)arg3 screenWidth:(double)arg4;
+ (id)bestFileFrom:(id)arg1;

@end

