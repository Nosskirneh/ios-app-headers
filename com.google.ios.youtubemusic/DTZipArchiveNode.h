//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DTZipArchiveNode : NSObject
{
    NSString *_name;
    unsigned long long _fileSize;
    _Bool _directory;
    NSMutableArray *_children;
}

@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic, getter=isDirectory) _Bool directory; // @synthesize directory=_directory;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

