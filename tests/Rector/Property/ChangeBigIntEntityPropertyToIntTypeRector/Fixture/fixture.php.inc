<?php

namespace Rector\Doctrine\Tests\Rector\Property\ChangeBigIntEntityPropertyToIntTypeRector\Fixture;

use Doctrine\ORM\Mapping as ORM;

/**
 * @ORM\Entity()
 */
class SomeEntity
{
    /**
     * @var int|null
     * @ORM\Column(type="bigint", nullable=true)
     */
    private $bigNumber;
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Rector\Property\ChangeBigIntEntityPropertyToIntTypeRector\Fixture;

use Doctrine\ORM\Mapping as ORM;

/**
 * @ORM\Entity()
 */
class SomeEntity
{
    /**
     * @var string|null
     * @ORM\Column(type="bigint", nullable=true)
     */
    private $bigNumber;
}

?>
