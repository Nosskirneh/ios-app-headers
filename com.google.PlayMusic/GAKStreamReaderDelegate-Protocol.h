//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GAKStreamReader;

@protocol GAKStreamReaderDelegate <NSObject>

@optional
- (void)streamReader:(GAKStreamReader *)arg1 willBeginDecodingToFormat:(struct AudioStreamBasicDescription *)arg2;
@end
