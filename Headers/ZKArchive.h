#import "NSObject.h"

@class NSFileManager, NSMutableArray, NSString, ZKCDTrailer;

@interface ZKArchive : NSObject
{
    BOOL drtsDelegateWantsSizes;
    BOOL drtsDidBeginZip;
    BOOL drtsDidBeginUnzip;
    BOOL drtsWillZipPath;
    BOOL drtsWillUnzipPath;
    BOOL drtsDidEndZip;
    BOOL drtsDidEndUnzip;
    BOOL drtsDidCancel;
    BOOL drtsDidFail;
    BOOL drtsDidUpdateTotalSize;
    BOOL drtsDidUpdateTotalCount;
    BOOL drtsDidUpdateBytesWritten;
    BOOL irtsIsCancelled;
    id _invoker;
    id _delegate;
    NSString *_archivePath;
    NSMutableArray *_centralDirectory;
    NSFileManager *_fileManager;
    ZKCDTrailer *_cdTrailer;
    double _throttleThreadSleepTime;
}

+ (id)uniquify:(id)arg1;
+ (BOOL)validArchiveAtPath:(id)arg1;
@property double throttleThreadSleepTime; // @synthesize throttleThreadSleepTime=_throttleThreadSleepTime;
@property(retain) ZKCDTrailer *cdTrailer; // @synthesize cdTrailer=_cdTrailer;
@property(retain) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain) NSMutableArray *centralDirectory; // @synthesize centralDirectory=_centralDirectory;
@property(copy) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id invoker; // @synthesize invoker=_invoker;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)didUpdateBytesWritten:(id)arg1;
- (void)didUpdateTotalCount:(id)arg1;
- (void)didUpdateTotalSize:(id)arg1;
- (void)didFail;
- (void)didCancel;
- (void)didEndUnzip;
- (void)didEndZip;
- (void)willUnzipPath:(id)arg1;
- (void)willZipPath:(id)arg1;
- (void)didBeginUnzip;
- (void)didBeginZip;
- (BOOL)delegateWantsSizes;
@property(copy) NSString *comment; // @dynamic comment;
- (void)cleanUpExpansionDirectory:(id)arg1;
- (id)uniqueExpansionDirectoryIn:(id)arg1;
- (void)calculateSizeAndItemCount:(id)arg1;

@end
