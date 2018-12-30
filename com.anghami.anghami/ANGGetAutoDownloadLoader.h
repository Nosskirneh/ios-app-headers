//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSArray, NSString;

@interface ANGGetAutoDownloadLoader : Loader
{
    NSArray *_songsToDownload;
    NSString *_autoDownloadId;
}

@property(retain, nonatomic) NSString *autoDownloadId; // @synthesize autoDownloadId=_autoDownloadId;
@property(readonly, nonatomic) NSArray *songsToDownload; // @synthesize songsToDownload=_songsToDownload;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (_Bool)suppressAutomaticServerMessage;
- (int)type;
- (id)initWithAutoDownloadId:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
