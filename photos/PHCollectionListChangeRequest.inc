{ Parsed from Photos.framework (iPhoneOS8.2) PHCollectionListChangeRequest.h }
{ Created on Fri Mar 20 2:11:14 2015 }


{$ifdef TYPES}
type
  PHCollectionListChangeRequestPtr = ^PHCollectionListChangeRequest;
{$endif}

{$ifdef CLASSES}

type
  PHCollectionListChangeRequest = objcclass external (NSObject)
  public
    class function creationRequestForCollectionListWithTitle (title: NSString): instancetype; message 'creationRequestForCollectionListWithTitle:';
    function placeholderForCreatedCollectionList: PHObjectPlaceholder; message 'placeholderForCreatedCollectionList';
    class procedure deleteCollectionLists (collectionLists: NSFastEnumerationProtocol); message 'deleteCollectionLists:';
    class function changeRequestForCollectionList (collectionList: PHCollectionList): instancetype; message 'changeRequestForCollectionList:';
    class function changeRequestForCollectionList_childCollections (collectionList: PHCollectionList; childCollections: PHFetchResult): instancetype; message 'changeRequestForCollectionList:childCollections:';
    procedure setTitle(newValue: NSString); message 'setTitle:';
    function title: NSString; message 'title';
    procedure addChildCollections (collections: NSFastEnumerationProtocol); message 'addChildCollections:';
    procedure insertChildCollections_atIndexes (collections: NSFastEnumerationProtocol; indexes: NSIndexSet); message 'insertChildCollections:atIndexes:';
    procedure removeChildCollections (collections: NSFastEnumerationProtocol); message 'removeChildCollections:';
    procedure removeChildCollectionsAtIndexes (indexes: NSIndexSet); message 'removeChildCollectionsAtIndexes:';
    procedure replaceChildCollectionsAtIndexes_withChildCollections (indexes: NSIndexSet; collections: NSFastEnumerationProtocol); message 'replaceChildCollectionsAtIndexes:withChildCollections:';
    procedure moveChildCollectionsAtIndexes_toIndex (indexes: NSIndexSet; toIndex: NSUInteger); message 'moveChildCollectionsAtIndexes:toIndex:';
  end;
{$endif}

